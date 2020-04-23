def read_file():
    result = (x for x in open('dataset.csv').read().split('\n'))
    return result

for x in read_file():
    print(x)
