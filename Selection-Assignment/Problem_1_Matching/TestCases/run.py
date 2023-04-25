import os
import sys
import time
No = sys.argv[1]
if No == '':
    print("put the filename as cmdline argument")

filename = "files/"
Inputfile="inputs/input"
outputfile = "out"
checkerfile = "outputs/output"
ext = ".txt"
listOfFiles = os.listdir(filename)
print(listOfFiles)
# listOfFiles=["22b2731_1 - Vishal Kumar.cpp"]
problems = {'1':4,'2':4}
for file in listOfFiles:
    print("testing "+file)
    os.system("g++ '"+filename+file+"'")
    for i in range(1,problems[No]):
        print( "for input No:" + str(i))
        os.system("./a.out < "+Inputfile+str(i)+ext+" > "+outputfile+str(i)+ext)
        # time.sleep(2)
        os.system("diff -b "+outputfile+str(i)+ext+" "+checkerfile+str(i)+ext + " > 'diff_" + file + str(i) + ext +"'" )
        print("testing done for Input No:" + str(i))
        os.system("rm "+outputfile+str(i)+ext)
    os.system("rm a.out")

# os.system("g++ "+filename)
# for i in range(1,4):
#     os.system("")