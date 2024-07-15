void FUN0()
{
    if(globalTrue)
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
