import sys


# main function/procedure
def main ():
    print ("Hello, World\n")    # print hello world to the stdout device
    return 0                    # exit with error code 0 (success)


# program main entry point
if __name__ == "__main__":      # check if the program was run directly
    sys.exit (main ())          # call main, exit with errorcode as ret


# end-of-file
