void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalReturnsTrueOrFalse())
    {
<START>
        fclose(data);
<END>
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
