void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    goto sink;
sink:
<START>
    fclose(data);
<END>
}
