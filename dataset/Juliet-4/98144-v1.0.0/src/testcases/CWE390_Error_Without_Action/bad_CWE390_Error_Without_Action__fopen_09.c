void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
}
