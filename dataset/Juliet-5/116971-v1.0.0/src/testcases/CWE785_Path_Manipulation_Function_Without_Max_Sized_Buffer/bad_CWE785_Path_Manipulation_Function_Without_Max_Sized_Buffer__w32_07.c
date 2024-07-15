static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            char path[BAD_PATH_SIZE];
            DWORD length;
            length = GetCurrentDirectoryA(BAD_PATH_SIZE, path);
            if (length == 0 || length >= BAD_PATH_SIZE) 
            {
                exit(1);
            }
<START>
            if (!PathAppendA(path, "AAAAAAAAAAAA"))
<END>
            {
                exit(1);
            }
            printSizeTLine(strlen(path));
            printIntLine(BAD_PATH_SIZE);
            printLine(path);
        }
    }
}
