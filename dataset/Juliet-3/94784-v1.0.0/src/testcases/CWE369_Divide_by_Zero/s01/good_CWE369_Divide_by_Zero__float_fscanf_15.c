void FUN0()
{
    float data;
    data = 0.0F;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%f", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
        break;
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%f", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    float data;
    data = 0.0F;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 2.0F;
        break;
    }
    switch(7)
    {
    case 7:
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    float data;
    data = 0.0F;
    switch(6)
    {
    case 6:
        data = 2.0F;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
