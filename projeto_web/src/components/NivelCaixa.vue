<template>
  <div class="container">
    <div class="w3-light-grey">
      <div
        class="w3-container w3-padding w3-blue w3-center"
        :style="nivel(vol)"
      >{{vol}}%</div>
    </div>
  </div>
</template>

<script>
export default {
  name: 'NivelCaixa',
  props: {
    vol: {
      type: Number,
      default: 0
    }
  },

  methods: {
    nivel: function (vol) {
      return `height:50px; width: ${vol}%`
    }
  }

}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
</style>
