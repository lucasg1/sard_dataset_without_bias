void FUN0()
{
    {
        FILE * fileDesc = NULL;
        fileDesc = fopen("file.txt", "w+");
        if (fileDesc == NULL)
        {
            printLine("fopen() failed");
            exit(1);
        }
        fclose(fileDesc);
    }
}
