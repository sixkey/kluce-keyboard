firmware: 
	rsync ./kluce ~/qmk_firmware/keyboards/sofle/keymaps/kluce
	make -C ~/qmk_firmware sofle:kluce:avrdude
