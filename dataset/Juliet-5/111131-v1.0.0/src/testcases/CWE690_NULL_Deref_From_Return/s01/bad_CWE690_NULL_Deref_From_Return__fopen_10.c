void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalTrue)
    {
<START>
        fclose(data);
<END>
    }
}
