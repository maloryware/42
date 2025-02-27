# couldnt figure out how to get there with standard
# ifconfig|netsh commands, so im going with
# 'cat /sys/class/net/*/address'
# feels like a cheap way out, but if it aint fix dont broke it
cat /sys/class/net/*/address
