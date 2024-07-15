void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
