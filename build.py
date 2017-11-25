import os
import sys
import shutil

#PROJECT CONFIG
projectName = 'Codeic'
authorName = 'AaronRobert'
buildProjectName = 'CodeicBuildTool 1.0'

#MAKE CONFIG
makeCommand = 'mingw32-make.exe'

#MAKE FILE CONFIG
COMPILER = 'g++.exe'
BUILD_DIR = './build'
OUTPUT = './build/output'
INTERMEDIATE = './build/intermediate'
BIN = 'Codeic.exe'
SRC = './Codeic'

def createDir():
    if not os.path.exists(OUTPUT):
        os.makedirs(OUTPUT)
    if not os.path.exists(INTERMEDIATE):
        os.makedirs(INTERMEDIATE)

def getCode(path,list):
    parents = os.listdir(path)
    for parent in parents:
        child = os.path.join(path,parent)
        if os.path.isdir(child):
            getCode(child,list)
        else:
            if child.split('.')[-1]=='cpp':
                list.append(child)

def genMakeFileContent(list):
    content = []
    # Append some message
    content.append('# Project:%s\n# Author: %s\n# Makefile created by %s\n\n' % (projectName,authorName,buildProjectName))
    # Define OBJ
    content.append('OBJ = \\\n')
    id = 0
    for codeFile in list:
        content.append('\t%s/temp_%d.o \\\n' % (INTERMEDIATE,id))
        id = id + 1
    content[-1] = content[-1][:-2]
    content.append('\n')
    # Append first command
    content.append('%s:$(OBJ)\n\t%s -o %s/%s $(OBJ)\n\n' % (BIN,COMPILER,OUTPUT,BIN))
    # Append complie obj file command
    id = 0
    for codeFile in list:
        content.append('%s/temp_%d.o:%s\n\t%s -DDEBUG -c %s -o %s/temp_%d.o\n\n' % (INTERMEDIATE,id,codeFile,COMPILER,codeFile,INTERMEDIATE,id))
        id = id + 1
    content[-1] = content[-1][:-2]
    return content

def WriteFile(path,content):
    if not os.path.exists(path):
        print('Path not found!')
        return
    file = open(path,'w')
    file.writelines(content)
    file.close()

def build():
    createDir()
    genMakeFile()
    os.system(makeCommand)

def clean():
    shutil.rmtree(BUILD_DIR)

def genMakeFile():
    list = []
    getCode(SRC,list)
    WriteFile('makefile',genMakeFileContent(list))

def done():
    print('\nDone\n')


def main():
    argvLen = len(sys.argv)
    if argvLen<2:
        print('Not enough argument')
        return
    elif sys.argv[1] == 'build':
        build()
    elif sys.argv[1] == 'clean':
        clean()
    elif sys.argv[1] == 'genMakeFile':
        genMakeFile()
    else:
        print('Invalid argument!\n')

main()