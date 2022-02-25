<template>
  <div class="hello">
    <h1>{{ msg }}</h1>

    <h1>Nivel Caixa</h1>
    <p></p>
    <p></p>
    <div class="w3-light-grey">
      <div
        class="w3-container w3-padding w3-blue w3-center"
        style="height:50px; width:25%"
      >25%</div>
    </div>
  </div>
</template>

<script>
export default {
  name: 'HelloWorld',
  props: {
    msg: String
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
a {
  color: #42b983;
}
</style>
