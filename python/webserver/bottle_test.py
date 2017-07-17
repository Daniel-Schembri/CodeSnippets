from bottle import route, run, template

@route('/')
@route('/hello/<name>')
def greet(name='Stranger'):
    return template('<b>Hello {{name}}</b>!', name=name)

@route('/start/')
def start():
    return "Hey Index"

run(host='localhost', port=8080)


