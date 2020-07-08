handle = open('text.txt', 'r')
for i in range(10):
    data = handle.readline()
    print(data)
handle.close()