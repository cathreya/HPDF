# Task 1 Flask App 

## Functionality 
Basic barebone app that allows the following functionalities.
* `/` serves a simple string
* `/<name>` serves a simple string using name
* `/authors` makes a request and fetches a list of authors and posts and serves a page with the list of authors and their post count.
* `/setcookie` sets a simple cookie, if it has not been set already.
* `/getcookies` serves a page consisting of all cookies in the form of key-value pairs.
* `/html` serves a simple *lorem ipsum* html page render
* `/image` serves my favourite gif  
* `/input` serves a simple text form which on submission logs the recieved data to stdout

**Note:** Trying to access `/robots.txt` will result in a 403 Forbidden

## Requirements
In order to run the flask app you require **python 3.4** or above along with all the requirements in the `requirements.txt`. In case **pip** has been installed, all the requirements can simply be installed using the command `pip install -r requirements.txt`

## Usage
Inorder to run the app, run the command `python3 app/app.py runserver [-h HOST] [-p PORT]`
