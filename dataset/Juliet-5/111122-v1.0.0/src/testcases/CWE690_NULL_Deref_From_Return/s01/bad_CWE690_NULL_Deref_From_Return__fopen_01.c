void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
<START>
    fclose(data);
<END>
}
