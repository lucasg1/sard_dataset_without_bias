void FUN0()
{
    goto sink;
sink:
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
