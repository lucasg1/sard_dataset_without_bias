void FUN0()
{
    {
        FILE * fileDesc = NULL;
        fileDesc = fopen("file.txt", "w+");
        if (fileDesc == NULL)
        {
<START>
        }
<END>
        fclose(fileDesc);
    }
}
