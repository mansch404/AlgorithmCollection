
def runAlgorithm():
        for x in range(8):
            for y in range(8):
                if y == 7:
                    print()
                if x % 2 == 0:
                    if y % 2 == 0:
                       color = "w"
                    else: 
                        color = "b"
                else:
                    if y % 2 == 0:
                       color = "b"
                    else: 
                        color = "w"
                
                print(color, end='')

runAlgorithm()