#!/bin/sh
#your code here


return_string()
{
    echo "Hello, $1 how are you doing today?"
    return 0
}

return_string $1
