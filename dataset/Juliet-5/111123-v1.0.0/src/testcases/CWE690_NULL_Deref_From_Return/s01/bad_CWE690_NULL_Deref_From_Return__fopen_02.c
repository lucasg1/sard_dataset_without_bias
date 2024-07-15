void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(1)
    {
<START>
        fclose(data);
<END>
    }
}
