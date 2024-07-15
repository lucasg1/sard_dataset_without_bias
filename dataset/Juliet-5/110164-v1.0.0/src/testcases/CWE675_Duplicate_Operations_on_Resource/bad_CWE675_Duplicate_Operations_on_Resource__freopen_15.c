void FUN0()
{
    FILE * data;
    data = NULL; 
    switch(6)
    {
    case 6:
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        fclose(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
