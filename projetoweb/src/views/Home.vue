<template>
  <div class="home">
    <h1>Nivel Caixa</h1>
    <div class="w3-light-grey">
      <NivelCaixa :vol=document.vol />
    </div>
    <p>{{document.vol}}</p>
  </div>
</template>

<script>
// @ is an alias to /src
import { db } from '../firebase'
import 'firebase/firestore'
import NivelCaixa from '@/components/NivelCaixa'

export default {
  name: 'home',
  components: {
    NivelCaixa
  },

  data () {
    return {
      document: 0
    }
  },

  firebase: {
    document: db.ref('/controle')
  }

  // created () {
  //   volCollection.on('value', function (snapshot) {
  //     console.log(snapshot.val())
  //     const temp = snapshot.val()
  //     this.volume = temp
  //   })
  // },

}
</script>
