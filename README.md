# Tmux Guest

A package to manage tmux spies.

This package is intended to create users that can attach to tmux sessions in readonly mode.

The created users cannot do anything on the system except for watching tmmux sessions.

It can work with tmux, byobu, etc. as long as you can call tmux bin directlly.

![demo](tmux-guest.gif)

## Installation

Tmux Guest requires tmux to be installed

```bash
wget https://github.com/mie00/tmux-guest/releases/download/0.0.0/tmux-guest-0.0.0.tar.gz
tar -xf tmux-guest-0.0.0.tar.gz
cd tmux-guest-0.0.0
./configure
make
make install
```

See [INSTALL](INSTALL) for detailed installation instructions.

## Usage

```bash
guest add myguest      # adds a username myguest
guest allow myguest    # allow myguest to spy on the user's sessions
guest kick myguest     # kick myguest out
guest deny myguest     # disallow myguest from spying
guest delete myguest   # remove user myguest
```

## Credits

Thanks guys for sharing the knowledge:

[Jo](https://github.com/grimpy): If it wasn't for him, I wouldn't be able to pull this out.

[Azmy](https://github.com/muhamadazmy): For teaching me lots of linux related stuff.

[Thabet](https://github.com/xmonader): For the nice talk we had regarding special permissions.

[Abdulrahman](https://github.com/abdulrahmantkhalifa): For introducing me to tmux.

## License

[GPL](COPYING)

Copyright © 2016 [Mohamed Elawadi](https://github.com/mie00)
