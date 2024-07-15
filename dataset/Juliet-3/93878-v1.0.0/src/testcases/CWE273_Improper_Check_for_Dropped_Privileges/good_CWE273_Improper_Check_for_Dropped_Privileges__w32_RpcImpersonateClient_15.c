void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
