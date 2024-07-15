void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        fclose(data);
<END>
    }
}
