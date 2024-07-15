void FUN0()
{
    if(globalFive==5)
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
