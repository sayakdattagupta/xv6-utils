## sleep
An implementation of the UNIX `sleep` command in xv6-riscv using C. Uses the `pause` system-call (13) (which is xv6 specific and is functionally identical to the `sleep` system call).

# usage 
```
sleep <ticks>
```
