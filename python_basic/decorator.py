def func(num):
    def first():
        print('welcome number one')
    def second():
        print('welcome second!')

    if num < 2:
        return first
    else:
        return second


first = func(1)
first()
