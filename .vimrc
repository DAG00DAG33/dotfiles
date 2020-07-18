syntax enable
colorscheme pablo
set relativenumber
set number

"moverse entre ventanas
nnoremap <c-j> <c-w>j
nnoremap <c-k> <c-w>k
nnoremap <c-h> <c-w>h
nnoremap <c-l> <c-w>l


"no mezclar non vi
set nocompatible
"anadir para algo
filetype plugin on

set path+=**
set wildmenu

"Automatically closing braces
inoremap {<CR> <CR>{<CR>}<Esc>ko
inoremap [ []<Esc>ha
inoremap ( ()<Esc>ha
set autoindent
set smartindent
"set colorcolumn=80
set showmatch
"set listchars=space:_,tab:>~ list
set noexpandtab
set shiftwidth=8
set tabstop=8
set softtabstop=0
