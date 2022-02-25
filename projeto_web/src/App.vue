<template>
  <div id="app">
    <div id="nav">
      <router-link to="/">Home</router-link> |
      <router-link to="/about">About</router-link>
    </div>
    <router-view />
  </div>
</template>

<style>
#app {
}
#nav {
}

#nav a {
}

#nav a.router-link-exact-active {
  color: #42b983;
}
</style>
