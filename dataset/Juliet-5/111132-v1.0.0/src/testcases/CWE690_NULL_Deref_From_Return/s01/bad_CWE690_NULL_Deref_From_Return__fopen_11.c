void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalReturnsTrue())
    {
<START>
        fclose(data);
<END>
    }
}
