<h1>Get Next Line</h1>
<h2>Overview</h2>
The project involves implementing a function in the C programming language that reads one line at a time from a file descriptor. The challenge lies in efficiently managing memory and addressing various conditions. A key aspect is optimizing the buffer size, which denotes the amount of data read in each read operation. Optimizing the buffer size is crucial for maximizing efficiency and minimizing memory usage. The function should be capable of reading and returning lines from different file descriptors, handling complex scenarios such as managing multiple newline characters or reaching the end of a file.
<h2>How To Use</h2>
<ol>
  <li>Clone the repository:</li>
  <pre><code>git clone https://github.com/recozzi/ft_printf_42.git</code></pre>
  <li>Move to the project's directory:</li>
  <pre><code>cd ft_printf</code></pre>
  <li>Run the Makefile to compile the library. This will create a `libftprintf.a` library file.</li>
  <pre><code>make</code></pre>
  <li>Now you are ready to use this library:</li>
  <pre><code>gcc main.c libftprintf.a -o output</code></pre>
</ol>
<h3>Features</h3>
<p>The ft_printf() function supports the following conversions:</p>
<ul>
  <li><code>%c</code> : Prints a single character.</li>
  <li><code>%s</code> : Prints a string.</li>
  <li><code>%p</code> : Prints the void * pointer argument in hexadecimal format.</li>
  <li><code>%d</code> : Prints a decimal (base 10) number.</li>
  <li><code>%i</code> : Prints an integer in base 10.</li>
  <li><code>%u</code> : Prints an unsigned decimal (base 10) number.</li>
  <li><code>%x</code> : Prints a number in hexadecimal (base 16) lowercase format.</li>
  <li><code>%X</code> : Prints a number in hexadecimal (base 16) uppercase format.</li>
  <li><code>%%</code> : Prints a percent sign.</li>
</ul>
<h2>Info</h2>
For more information about this project, please read the subject file <a href="https://github.com/recozzi/ft_printf_42/blob/main/en.subject.pdf">here</a>.
<h2>Licence</h2>
See <a href="https://github.com/recozzi/ft_printf_42/blob/main/LICENSE">License</a>.
