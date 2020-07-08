a = ['red', 'green', 'blue']
print(' '.join(a))
print(''.join(a))
print('***'.join(a))

youtube = 'https://www.youtube.com/results?search_query='
search_query = input().split()
result_query = youtube + '+'.join(search_query)
print(result_query)