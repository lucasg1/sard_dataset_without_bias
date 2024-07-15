void FUN0()
{
    FILE * data;
    data = NULL; 
    goto source;
source:
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    goto sink;
sink:
<START>
    fclose(data);
<END>
}
