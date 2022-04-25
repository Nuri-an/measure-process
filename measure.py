import subprocess
from datetime import datetime


def executeProgram():
    args = ['main.exe']

    p = subprocess.Popen(args,
                            stdin=subprocess.PIPE,
                            stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE,
                            text=True
                        )

    # outExit, outError = p.communicate('8')


check = 1
test = True

print('Saídas do processo:\n')
while (test):
    startTime = datetime.now()
    i = 0
    while (i < check):
        executeProgram()
        i = i+1
    
    endTime = datetime.now()
    totalTime = endTime - startTime
    print("\n\t Tempo de execução para somar a matriz " + str(check) + " vez: " + str(totalTime.seconds) + ":"  + str(totalTime.microseconds))

    if (check == 1): check = 5
    elif (check == 5): check = 10
    elif (check == 10): check = 50
    elif (check == 50): check = 100
    elif (check == 100):
            check = -1
            test = False

print("\n\n Programa Python finalizado!")