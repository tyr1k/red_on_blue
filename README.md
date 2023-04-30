<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>My GTK Application</title>
</head>
<body>
	<h1>My GTK Application</h1>
	<p>This is a simple GTK application that creates a window with a red label and blue background. The label text says "Hello, world!" and is styled in red color. The code for this application is written in C using the GTK library.</p>
	<h2>Requirements</h2>
	<ul>
		<li>GTK 3.0 or later</li>
	</ul>
	<h2>Building and Running</h2>
	<p>To build and run this application, follow these steps:</p>
	<ol>
		<li>Clone the repository:</li>
		<code>git clone https://github.com/tyr1k/red_on_blue</code>
		<li>Change to the project directory:</li>
		<code>cd your-repo</code>
		<li>Compile the code:</li>
		<code>gcc main.c -o myapp `pkg-config --cflags --libs gtk+-3.0`</code>
		<li>Run the application:</li>
		<code>./myapp</code>
	</ol>
</body>
</html>
