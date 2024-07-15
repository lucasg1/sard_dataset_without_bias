void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    while(1)
    {
<START>
        fclose(data);
<END>
        break;
    }
}
