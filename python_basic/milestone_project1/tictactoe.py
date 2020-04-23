import os

def chose_player(p1):
    if(list(map(lambda x: x == 'x',p1))[0]):
        return 'o'
    else:
        return 'x'

def board(i):
    print("""
         |     |
      {}  |  {}  |  {}
    _____|_____|____
         |     |
      {}  |  {}  |  {}
    _____|_____|____
         |     |
      {}  |  {}  |  {}
         |     |
    """.format(i[0],i[1],i[2],i[3],i[4],i[5],i[6],i[7],i[8]))

def check(position,game,player):
    if str(game[position-1]) not in 'xo':
        game[position-1] = player
        return True
    else:
        return False

def switch_player(player):
    if(player == 'x'):
        return 'o'
    else:
        return 'x'

def win(game):
    result = False
    datar1 = ''.join([str(game[x]) for x in range(3)])
    datar2 = ''.join([str(game[x]) for x in range(3,6)])
    datar3 = ''.join([str(game[x]) for x in range(6,9)])
    menurun1 = ''.join([str(game[x]) for x in range(0,8,3)])
    menurun2 = ''.join([str(game[x]) for x in range(1,8,3)])
    menurun3 = ''.join([str(game[x]) for x in range(2,8,3)])
    if(datar1 == 'xxx' or datar1 == 'ooo'): result = True
    elif(datar2 == 'xxx' or datar2 == 'ooo'): result = True
    elif(datar3 == 'xxx' or datar3 == 'ooo'): result = True
    elif(menurun1 == 'xxx' or menurun1 == 'ooo'): result = True
    elif(menurun2 == 'xxx' or menurun2 == 'ooo'): result = True
    elif(menurun3 == 'xxx' or menurun3 == 'ooo'): result = True
    return result

def main():
    print("Welcome to Tic Tac Toe!")
    p1 = input("Player 1: Do you want to be X or O? ").lower()
    p2 = chose_player(p1)
    print('Player 1 will go first.')
    play = input("Are you ready to play? enter yes or no.\n")
    game = [x for x in range(1,10)]
    player = p1
    i = 0
    while play.lower() == 'yes':
        os.system('clear')
        board(game)
        if(i == 9): break
        position = int(input('choose your next position: (1-9) '))
        if check(position,game,player):
            if win(game):
                print('player {} winner!'.format(player))
                break
            player = switch_player(player)
        i+=1

        continue


if __name__ == "__main__":
    main()
