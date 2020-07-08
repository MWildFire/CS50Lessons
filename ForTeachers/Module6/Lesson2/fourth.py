Capitals = dict()
Capitals['Russia'] = 'Moscow'
Capitals['Ukraine'] = 'Kiev'
Capitals['USA'] = 'Washington'

Countries = ['Russia', 'France', 'USA', 'Ukraine']

for country in Countries:
    if country in Capitals:
        print('Столица страны '+ country + ': ' + Capitals[country])
    else:
        print('В базе нет столицы')