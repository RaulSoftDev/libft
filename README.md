<div align="center">
  <img width="175" src="https://img.shields.io/badge/Grade-125%25-00dd13?style=for-the-badge&logo=42"/>
</div>

<div align="center">
  <h1 align="center">Libft</h1>
</div>

<p direction="auto">
  Libft is a 42 Madrid Common Core project in which you will learn to build your own C library that will be useful for future projects.
</p>

## About the project
<p direction="auto">
  In the Libft project you will make your own set of functions based in the C standard library as well as other functions that do not belong to it.
</p>
<h3>Mandatory part I</h3>
<ul>
  <li>You will have to recode some of the C standard library <code>libc</code> functions.</li>
  <li>The functions will have the same prototypes and will behave like the original ones.</li>
  <li>The functions must stick to the <code>man</code> official software documentation descriptions.</li>
  <li>The functions nomenclature will begin with <code>ft_</code>.</li>
  <li>For example: <code>strlen</code> will be <code>ft_strlen</code>.</li>
</ul>
<h3>Mandatory part II</h3>
<ul>
  <li>You will have to code new functions or some of those in the C standard library <code>libc</code> but in a different way.</li>
  <li>Some of this functions may be useful to finish coding some of the Mandatory Part I functions.</li>
</ul>
<h3>Instructions</h3>
<ul>
  <li>The use of global variables is forbidden.</li>
  <li>If you have to split your function into others, make sure that they are static functions so that they cannot be used outside the script.</li>
  <li>All files must be in the repository root folder.</li>
  <li>The delivery of unused files is forbidden.</li>
  <li>The program must compile with the <code>-Wall -Wextra -Werror</code> compiler flags.</li>
  <li>You must use the <code>ar</code> command to create the library. <code>libtool</code> is strictly forbidden.</li>
  <li>The <code>libft.a</code> file must be created in the repository root folder.</li>
</ul>

## Compilation
<h3>Requirements</h3>
<ul>
  <li>C compiler: <code>gcc</code>, <code>cc</code>, etc...</li>
  <li><code>make</code> utility.</li>
</ul>

<h3>Make commands</h3>
<ul>
  <li><code>make</code>: compile project.</li>
  <li><code>make clean</code>: deletes compilation files except the executables.</li>
  <li><code>make fclean</code>: deletes all compilation files.</li>
  <li><code>make re</code>: executes <code>make fclean</code> and <code>make</code>.</li>
</ul>

<h3>Build project</h3>
<ol>
<li>
<p dir="auto">Clone the repository:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>git clone https://github.com/RaulSoftDev/libft.git</samp></pre>
</div>
</li>
<li>
<p dir="auto">Build the project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>make</samp></pre>
</div>
</li>
<li>
<p dir="auto">Use the library in your project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre>#include "libft/libft.h"</pre>
</div>
</li>
<li>
<p dir="auto">Compile your project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>gcc -Wall -Wextra -Werror *.c libft/libft.a</samp></pre>
</div>
</li>
</ol>
