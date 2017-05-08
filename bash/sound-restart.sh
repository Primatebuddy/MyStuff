#!/bin/bash
#sudo tee /etc/sudoers.d/$USER <<END
#END

clear

echo "checking jackdbus status..."
ps -A | grep 'jackdbus'
if [ $? -eq 0 ]; then 
	killall -9 jackdbus
	echo "jackdbus killed"
fi

sleep 2s
echo

echo "checking pulseaudio..."
pulseaudio --check
if [ $? == 0 ]; then
	pulseaudio --kill
	if [ $? == 0 ]; then
		echo "pulseaudio killed"
	fi
fi

sleep 2s
echo

echo "restarting ALSA..."
sudo alsa force-reload

sleep 2s
echo

pulseaudio --start
pulseaudio --check --verbose

#sudo /bin/rm /etc/sudoers.d/$USER
#sudo -k
