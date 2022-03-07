function carregar(){
    var text = document.getElementById ('d2')
    var img = document.getElementById ('img')
    var data = new Date()
    var hora = data.getHours()
    var min = data.getMinutes()
    var comprimento = document.getElementById('comp')
   
    
    text.innerHTML = `Página Aberta ás ${hora}:${min}`

    if (hora>=6 && hora<12){
       img.src= 'https://i.pinimg.com/236x/8f/27/af/8f27af4a7144f42e0a46dd52582f77d3--laptop.jpg' 
       img.style.boxShadow = '1px 1px 50px yellow'
     
    } else if (hora>=12 && hora<18){
    img.src = 'https://www.melhoresdestinos.com.br/wp-content/uploads/2020/11/praia-do-espelho-16-200x200.jpg'
    img.style.boxShadow = '1px 1px 50px #e7d0b5'
    comprimento.innerHTML = 'Boa Tarde'
    document.body.style.background ='#e7d0b5'
}
    
    else {
        img.src = 'https://i.pinimg.com/200x/ef/c8/3b/efc83b14b57184d935e87f76539b7085.jpg'
        img.style.boxShadow = '1px 1px 50px black'
        comprimento.innerHTML = 'Boa Noite'
        document.body.style.background ='#273040'
        document.body.style.color='white'
    }
}