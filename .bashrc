# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
case $- in
    *i*) ;;
      *) return;;
esac
# don't put duplicate lines or lines starting with space in the history.
# See bash(1) for more options
HISTCONTROL=ignoreboth

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# If set, the pattern "**" used in a pathname expansion context will
# match all files and zero or more directories and subdirectories.
#shopt -s globstar

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color|*-256color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
	# We have color support; assume it's compliant with Ecma-48
	# (ISO/IEC-6429). (Lack of such support is extremely rare, and such
	# a case would tend to support setf rather than setaf.)
	color_prompt=yes
    else
	color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac
#################
#  alias setup  #
#################

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# colored GCC warnings and errors
#export GCC_COLORS='error=01;31:warning=01;35:note=01;36:caret=01;32:locus=01:quote=01'

####################
#  alias for tmus  #
####################

alias tmuxns='tmux new -s '
alias tmuxas='tmux attach-session -t '
alias tmuxks='tmux kill-session '
alias tmuxls='tmux list-session '

########################################################
#  alias for a vim plugin super-man to read man files  #
########################################################

export PATH="$PATH:$HOME/.vim/bundle/vim-superman/bin"
alias  man=vman
# some more ls aliases
#alias ll='ls -ahltrF'
alias ll='ls -ahlF'
alias la='ls -A'
alias l='ls -CF'

#aliase to mkdir
alias md='mkdir -m 750'

#aliase to system Monitor 
alias gsm='gnome-system-monitor'

#aliase to double click
alias o='xdg-open'

#aliase to gvim
alias vi='gvim'

#aliase to gedit
alias gg='gedit'

#aliase to open google-chrome
alias go='google-chrome'
#aliase to open amide
alias am='amide'

#aliase to source
alias so='source'

#aliase to source
alias pmod='RunPmod'

#aliase to source
alias root='root -l'

#alias to the work log;
alias note='vi /home/mabo/2019-now-work-bo/work/working-note-log/small-note/note.tex'

#alias to the my wikipedia;
alias wiki='vscode /home/mabo/2019-now-work-bo/study_files/my_wikipedia_latex/my_wikipedia.tex'


#alias to the work log;
alias cdnote='cd /home/mabo/2019-now-work-bo/work/working-note-log/'

#alias to the texclear to clear the latex generated files
alias texclear='/home/mabo/.vim/tools/texclear'

#alias to the cd software/data;
alias cddata='cd /home/mabo/software/data'

#alias to the cd software/src;
alias cdsrc='cd /home/mabo/software/src'

#alias to the cd Ma;
alias cdma='cd /localdata/Ma/software'

#alias to the cd 2019-now-work-bo
alias cdwork='cd /home/mabo/2019-now-work-bo'

#alias to the du;
alias du='du -h'

#alias to the df;
alias df='df -h'

#alias to the visual studio code;
alias vscode='/home/mabo/program_files/visual-studio-code/bin/code'

#####################################
#  end of alias                     #
#####################################


#for CUDA PATH and library
export PATH=/usr/local/cuda-9.1/bin${PATH:+:${PATH}} 
export LD_LIBRARY_PATH=/usr/local/cuda-9.1/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}

export PKG_CONFIG_PATH=/usr/lib/pkgconfig 
source /home/mabo/program_files/variablesGate_8.0_ma.sh
source /home/mabo/program_files/variables_root.sh
#for texlive
export MANPATH=/usr/local/texlive/2019/texmf-dist/doc/man${MANPATH:+:${MANPATH}}
# export INFOPATH /usr/local/texlive/2019/texmf-dist/doc/info${INFOPATH:+:${INFOPATH}}
export PATH=/usr/local/texlive/2019/bin/x86_64-linux${PATH:+:${PATH}}

