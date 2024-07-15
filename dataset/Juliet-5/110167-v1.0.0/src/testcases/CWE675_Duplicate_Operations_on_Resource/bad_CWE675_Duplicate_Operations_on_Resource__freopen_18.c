void FUN0()
{
    FILE * data;
    data = NULL; 
    goto source;
source:
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    goto sink;
sink:
<START>
    fclose(data);
<END>
}
