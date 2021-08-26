obj-m := main.o

ARCH=arm

CROSS_COMPILE=arm-none-linux-gnueabihf-

KERN_DIR=/home/irshad/BeagleBoneLLD_Experimentations/workspaces/lld/source/linux_bbb_4.14/

all:
	sudo make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) modules
clean:
	sudo make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) clean
help:
	sudo make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) help
