def pig_latin(word):
    if(word[0] in 'aiueo'):
        return word + 'ay'
    else:
        return word[1:] + word[0] + 'ay'

print(pig_latin('apple'))
