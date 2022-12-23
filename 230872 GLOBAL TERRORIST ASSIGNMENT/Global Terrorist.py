import matplotlib.pyplot as plt


def compare(a: list, b: list) -> bool:
    # This is to compare two elements
    length = len(a)
    for i in range(length):
        if a[i] != b[i]:
            return False
    return True


def global_terrorist() -> dict:
    # Open file and store in variable input_length
    input_file = open('Terrorist.txt', 'r')
    input_length = input_file.readlines()
    input_file.close()
    # Get the length of the features in the file
    input_sum = int(input_length[0])
    # Index the features
    input_index = list(range(1, input_sum+1))
    input_feature = [0]*input_sum
    feature_total = [0]*input_sum
    similarity_id = [0]*input_sum
    for counter in range(1, input_sum+1):
        input_feature[counter-1] = input_length[counter].strip('\n').split(',')
        # Get sum of feature and add to index
        feature_total[counter-1] = sum([int(i) for i in input_feature[counter-1]])
    # Check for similarity
    for i in range(input_sum):
        for j in range(input_sum):
            if i == j:
                continue

            if feature_total[i] == feature_total[j]:
                same_feature = compare(input_feature[i], input_feature[j])
                if same_feature: similarity_id[i] = j + 1

    # The program return the serial number, feature, sum and the similarity id
    return {
        'index': input_index,
        'features': input_feature,
        'total': feature_total,
        'similar': similarity_id
        }


def row(*iterables):
    # This is a helper function that print out iterables like a table row
    for i in iterables:
        print(str(i).ljust(20), end='')
    print()


def table(data: dict) -> None:
    # This function print the data response from the global terrorist program like a table using table_row function
    print('GLOBAL TERRORIST DATASET')
    row('INDEX', 'FEATURES', 'TOTAL', 'DUPLICATE')
    total = len(data['index'])
    for i in range(total):
        index = data['index'][i]
        features = ','.join(data['features'][i])
        feature_total = data['total'][i]
        similar = data['similar'][i]
        row(index, features, feature_total, similar)


def graph(data: dict) -> None:
    # This function display the data response from global terrorist program in a bar chart
    y = data['similar']
    x = data['index']
    plt.bar(x, y, label='duplicate index')
    plt.title('Graph of Duplicate against INDEX')
    plt.ylabel('DUPLICATE')
    plt.xlabel('INDEX')
    plt.legend()
    plt.show()


def occurrence_table(data: dict) -> None:
    feature = data['features']
    occurrence = {','.join(i):0 for i in feature}
    for i in feature:
        lookup = ','.join(i)
        count = occurrence.get(lookup)
        occurrence[lookup] = count + 1
    row('SNO', 'Feature', 'Occurence')
    feature_set = list(occurrence.keys())
    cases = range(1,len(feature_set)+1)
    for sno in cases:
        current_feature = feature_set[sno-1]
        current_occurrence = occurrence[current_feature]
        row(sno, current_feature, current_occurrence)

def occurrence_graph(data: dict) -> None:
    # This function display the occurrence of features in data response from global terrorist program in a bar chart
    feature = data['feature']
    occurrence = {','.join(i):0 for i in feature}
    # Initializing an hash table for the occurrence with default value of zero(0)
    # Increment the occurrence of the features by 1 per occurrence
    for i in feature:
        lookup = ','.join(i)
        count = occurrence.get(lookup)
        occurrence[lookup] = count + 1

    x = range(1, len(occurrence.keys())+1)  # X hold the features
    y = occurrence.values()  # Y hold the occurence value
    plt.title('Graph of occurrence of features')
    plt.xlabel('Features')
    plt.ylabel('Occurrence')
    plt.bar(x, y)  # Plot the bar chart
    plt.show()  # Display the chart

# Entry Point of the program
if __name__ == '__main__':
    data = global_terrorist()
    table(data)
    print('\n\n')
    occurrence_table(data)
    occurrence_graph(data)
    
