void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
